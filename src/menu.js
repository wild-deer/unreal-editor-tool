import React, { useState, useEffect } from 'react';
import { UploadOutlined,DownloadOutlined,CheckCircleOutlined,CloseCircleOutlined} from '@ant-design/icons';
import {Table, Button, message, Upload, Input, Row, Col, ConfigProvider, Switch, Space} from 'antd';
import XLSX from "xlsx";
import mytheme from "./theme";
import zhCN from "antd/lib/locale/zh_CN";
// 定义表格的列





// 定义一个组件，用于展示表格
const App = () => {
    const [messageApi, contextHolder] = message.useMessage();
    // 定义一个状态，用于存储json文件中的数据
    const [isrefresh,setrefresh] = useState(false);
    const [data, setData] = useState([]);
    const [searchText, setSearchText] = useState('');
    const [isChecked, setIsChecked] = useState(false);
    const [mydata,mysetData] = useState('dark');
    const handleSwitchChange = (checked) => {
        setIsChecked(checked);
        if (checked){
            mysetData('light');
        }else{
            mysetData('dark');
        }
    };
    const columns = [
        {
            title: 'id',
            dataIndex: 'id',
            key: 'id',
        },{
            title: '描述',
            dataIndex: 'describe',
            key: 'describe',
        },{
            title: "类型",
            dataIndex:'type',
            key:"type",
            sorter: (a, b) => {
                if (a.type && b.type) {
                    return a.type.localeCompare(b.type);
                }
                return 0;
            },
        },
        {
            title:'是否在场景中放置',
            dataIndex:'placedinUE',
            key:'placedinUE',
            sorter: (a, b) => {
                if (a.placedinUE && b.placedinUE) {
                    return a.placedinUE.localeCompare(b.placedinUE);
                }
                return 0;
            },
            render: (text) => {
                if (text === 'TRUE') {
                    return <CheckCircleOutlined style={{ color: 'green' }} />;
                }
                if (text === 'FALSE') {
                    return <CloseCircleOutlined style={{ color: 'red' }} />;
                }
                return null;
            },

        },
        {
            title: '操作',
            key: 'action',
            render: (_, record) => {
                if (record.placedinUE==='TRUE'){
                    return <Space size = "middle"><Button onClick={()=>handleClick(record)}></Button><Button onClick={()=>Tmyclick("JumpView",record.id)}>选择</Button></Space>
                }else{
                   return <Button onClick={()=>handleClick(record)}>添加</Button>
                }
            }
            ,
        },

    ];

    useEffect(()=>{
        window.ue = {
            interface:{
                UE_setPanel: function (data){

                },
                Exportjson: function (data){
                    messageApi.info('保存成功，路径：' +data);
                },
                connectStatu:function(data){

                },
                refreshTable:function (data1){
                    console.log("data1 :"+ typeof(data1));
                    const mydata = JSON.parse(data1);
                    console.log("id:"+typeof(mydata["id"]));
                    console.log("location:" + mydata["location"]);
                    console.log("rotation:"+mydata["rotation"]);
                    console.log("scale:" + mydata["scale"]);
                    console.log(mydata);
                    data.forEach(item => {
                        if (item.id === mydata["id"]) {
                            item.location = mydata["location"];
                            item.rotation = mydata["rotation"];
                            item.scale = mydata["scale"];
                            item.placedinUE = "TRUE";
                        }

                    });

                    console.log(data);
                    setrefresh(!isrefresh);
                },
                broadcast: function (name, data, cb){
                    if (typeof name != "string") return;
                    const args = [name, ""];
                    if (typeof data != "undefined")
                        args[1] = data;
                    const hash = encodeURIComponent(JSON.stringify(args));
                    if (typeof window.history == "object" && typeof window.history.pushState == "function") {
                        window.history.pushState({}, "", "#" + hash);
                        window.history.pushState({}, "", "#" + encodeURIComponent("[]"));
                    } else {
                        document.location.hash = hash;
                        document.location.hash = encodeURIComponent("[]");
                    }
                    cb && cb();
                }
            }
        }

    },[isrefresh,data,messageApi]);

    const readJson = (file) =>{
        const reader = new FileReader();
        reader.onload = (e) => {
            const jsonData = JSON.parse(e.target.result);
            setData(jsonData["body"]);
            console.log(jsonData["body"])
            // Do something with jsonData
        };
        reader.readAsText(file);
        setrefresh(!isrefresh);
    }
    const readExcel = (file) => {
        const promise = new Promise((resolve, reject) => {
            const fileReader = new FileReader();
            fileReader.readAsArrayBuffer(file);

            fileReader.onload = (e) => {
                const bufferArray = e.target.result;
                const wb = XLSX.read(bufferArray, { type: 'buffer' });
                const wsname = wb.SheetNames[0];
                const ws = wb.Sheets[wsname];
                const options = { defval: null };
                const data = XLSX.utils.sheet_to_json(ws,options);
                resolve(data);//操作结果
            };

            fileReader.onerror = (error) => {
                reject(error);
            };
        });

        promise.then((d) => {

            console.log(d);

            setData(d);
        });
    };

    const handleUpload = (file) => {

        if(file.type==="application/vnd.openxmlformats-officedocument.spreadsheetml.sheet"){
            readExcel(file);
        }
        else if(file.type==="application/json"){
            readJson(file);
        }else if(file.type==="text/plain"){

        }else {
            messageApi.info("不支持该格式文件");
        }


    };

    function generateJsonString(data){
        const mydata = {
            body:data
        }
        const jsonString = JSON.stringify(mydata);
        return jsonString;
    }
    function send(para,msg){
        console.log("send");

        window.ue && window.ue.interface.broadcast(para, msg, function cb(data){

        });

    }
    //跳转逻辑
    function Tmyclick(para,id){
        console.log("跳转");
        data.forEach(item => {
            if (item.id === id) {
                let tempdata = {};
                tempdata["id"] = item.id;
                tempdata["location"] = item.location;
                tempdata["rotation"] = item.rotation;
                tempdata["scale"] = item.scale;
                tempdata["type"] = item.type;
                tempdata["describe"] = item.describe;
                //JumpView
                console.log("this is test");
                console.log(tempdata);
                window.ue && window.ue.interface.broadcast(para,tempdata,function cb(data){
                });
            }
        })

    };
    function syncDataToScene(para,msg){
        const newArr = [];
        if((Object.keys(data).length)!==0){

            //遍历数组
            for (let obj of data) {
                if(obj["placedinUE"]==="TRUE"){
                    newArr.push(obj);
                    //如果已经放在场景就添加数据
                }
            }
            console.log(newArr);
        }


        window.ue&& window.ue.interface.broadcast(para,newArr,function cb(data){

        });
    }
    function send2(para,msg){
        console.log("send");
        window.ue && window.ue.interface.broadcast(para, generateJsonString(msg), function cb(data){
        });
    }


    // 定义一个函数，用于处理点击事件
    const handleClick = (record) => {
        // record是点击的行的数据对象
        // 这里点击之后发送id
        let data = {
            "id":record.id.toString(),
            "type":record.type
        }
        console.log("type" +record.type);
        send("SendID",data);
    };
    // 返回一个表格组件，使用antd的Table组件，并传入columns和data作为属性
    // 同时，使用onRow属性，为每一行添加一个点击事件，调用handleClick函数，并传入该行的数据
    return (
        <div >
            {contextHolder}
            <ConfigProvider locale={zhCN} theme={
                        {
                            token: mytheme[mydata] ,
                        }
                    }>
                <div>
                <Switch checkedChildren="浅色" unCheckedChildren="深色" defaultChecked ={isChecked} onChange={handleSwitchChange} />

            <Row >
                <Col span={12}>
                    <Input.Search
                        placeholder="请输入搜索内容"
                        onSearch={(value) => setSearchText(value)}
                        style={{ width: 200, marginBottom: 16 }}
                    />
                    <Button onClick={()=>syncDataToScene("syncDataToScene",data)}>刷新</Button>
                </Col>
                <Col span={12} style={{ textAlign: 'right' }}>

                    <Button style={{right:'10px'}} type="primary" icon={<DownloadOutlined />}onClick={()=>send2("Doawnload",data)}>保存</Button>
                    <Upload action={'http://127.0.0.1:8000/upload'} accept={".xlsx,.json"} beforeUpload={handleUpload}>
                        <Button type="primary" icon={<UploadOutlined />}>上传</Button>
                    </Upload>
                </Col>
            </Row>
            <Table
                columns={columns}
                dataSource={data.filter((item) =>
                    (item.id && item.id.toString().toLowerCase().includes(searchText.toLowerCase())) ||
                    (item.describe && item.describe.toLowerCase().includes(searchText.toLowerCase()))
                )}
                search={true}
                rowKey={(record) => record.id + Math.random()}
            />
                </div>
            </ConfigProvider>
        </div>
    );
};

export default App;

