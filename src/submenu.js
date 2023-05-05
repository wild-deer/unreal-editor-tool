import React, { useState, useEffect} from 'react';
import mytheme from "./theme";
import zhCN from "antd/lib/locale/zh_CN";
import { Button,message ,Switch,ConfigProvider } from 'antd';
import 'antd/dist/reset.css';


function App() {

    const [panelvisible,setPanel] = useState(false);
    // eslint-disable-next-line no-unused-vars
    const [messageApi, contextHolder] = message.useMessage();
    const insertNewActor = async (id,location,rotation,scale) => {
        // 假设你的json文件的路径是./data.json
        console.log("time")
        // 创建一个对象，包含两个参数
        const data = {
            id: id,
            location: location,
            rotation:rotation,
            scale:scale
        };
        // 将对象转换为json字符串
        const body = JSON.stringify(data);
        // 设置请求选项，包括方法，头部和主体
        const options = {
            method: "POST",
            headers: {
                "Content-Type": "application/json"
            },
            body: body
        };
        // 发送请求，并等待响应
        const response = await fetch('http://127.0.0.1:8000/insert_camproperties', options);
        // 将响应转换为json对象
        const json = await response.json();
        // 将json数据存储到状态中
        console.log(json)

    };

    useEffect(()=>{
        window.ue = {
            interface:{
                UE_setPanel: function (data){
                    setPanel(data);
                },
                IdNull:function(data){
                    messageApi.info('请先从左侧表格中选择需要添加的物体!');
                },
                okAction:function(data){
                    let mydata = JSON.parse(data);
                    // eslint-disable-next-line no-useless-concat
                    messageApi.info("id: "+ mydata['id']+"\n" + "Location: "+mydata['location']+"\n"+"Rotation: "+mydata['rotation']+"\n"+"scale: "+mydata['scale']);
                    //与后台交互界面
                    insertNewActor(mydata['id'],mydata['location'],mydata['rotation'],mydata['scale']);
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

    },[messageApi]);

    let fontsz = "10px";

    function send(para,msg){

        console.log("send1");
        window.ue && window.ue.interface.broadcast(para, msg, function (v){
        });

    }
    function send2(para,msg){
        console.log("===send2===");

        window.ue && window.ue.interface.broadcast(para, msg, function (v){
        });

    }



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


    return (
        <div>


            {contextHolder}
            <ConfigProvider locale={zhCN} theme={
                {
                    token: mytheme[mydata] ,
                }
            }>
                <Switch checkedChildren="浅色" unCheckedChildren="深色" defaultChecked ={isChecked} onChange={handleSwitchChange} />
            {panelvisible&&
                <div className="container" style={{ position: 'absolute', top: '75%', left: '5%', transform: ' rotate(0deg)'}} >

                    <Button style={{ position: 'absolute',padding:'0px',top: '0px',width :'25px',height :'25px', left: '30px',transform: ' rotate(0deg)' ,fontSize :fontsz}} onClick={()=>send("Test","N")} >  N  </Button>
                    <Button style={{ position: 'absolute',padding:'0px', top: '0px',width :'25px',height :'25px', left: '0px', transform: 'rotate(0deg)' ,fontSize :fontsz}} onClick={()=>send("Test","NW")} >NW</Button>
                    <Button style={{ position: 'absolute', padding:'0px',top: '0px',width :'25px',height :'25px', left: '60px', transform: 'rotate(0deg)' ,fontSize :fontsz}} onClick={()=>send("Test","NE")}>NE</Button>

                    <Button type="primary" style={{ position: 'absolute',padding:'0px',top: '30px',width :'25px',height :'25px', left: '30px',transform: ' rotate(0deg)' ,fontSize :fontsz}} onClick={()=>send("Test","CENTER")}>中</Button>
                    <Button style={{ position: 'absolute',padding:'0px', top: '30px',width :'25px',height :'25px', left: '0px', transform: 'rotate(0deg)' ,fontSize :fontsz}} onClick={()=>send("Test","W")}>W</Button>
                    <Button style={{ position: 'absolute', padding:'0px',top: '30px',width :'25px',height :'25px', left: '60px', transform: 'rotate(0deg)' ,fontSize :fontsz}} onClick={()=>send("Test","E")}>E</Button>

                    <Button style={{ position: 'absolute',padding:'0px',top: '60px',width :'25px',height :'25px', left: '30px',transform: ' rotate(0deg)' ,fontSize :fontsz}} onClick={()=>send("Test","S")} >  S  </Button>
                    <Button style={{ position: 'absolute',padding:'0px', top: '60px',width :'25px',height :'25px', left: '0px', transform: 'rotate(0deg)' ,fontSize :fontsz}} onClick={()=>send("Test","SW")}>SW</Button>
                    <Button style={{ position: 'absolute', padding:'0px',top: '60px',width :'25px',height :'25px', left: '60px', transform: 'rotate(0deg)' ,fontSize :fontsz}} onClick={()=>send("Test","SE")}>SE</Button>

                    <Button style={{ position: 'absolute',padding:'0px', top: '100px',width :'25px',height :'25px', left: '0px', transform: 'rotate(0deg)' ,fontSize :fontsz,background: "gray",color: 'white',}} onClick={()=>send("Test","NO")}>NO</Button>
                    <Button style={{ position: 'absolute', padding:'0px',top: '100px',width :'25px',height :'25px', left: '60px', transform: 'rotate(0deg)' ,fontSize :fontsz,background: "#1677FF",color: 'white',}} onClick={()=>send2("Test","OK")}>OK</Button>
                </div>
            }


            </ConfigProvider>
        </div>
    );
}

export default App;