import React from 'react';
import ReactDOM from 'react-dom/client';
import './index.css';
import App from './App';
import reportWebVitals from './reportWebVitals';
import { ConfigProvider} from 'antd'
import zhCN from "antd/lib/locale/zh_CN";
import mytheme from "./theme"
import { CheckOutlined } from '@ant-design/icons';
import { Space, Switch } from 'antd';
const root = ReactDOM.createRoot(document.getElementById('root'));


root.render(



        <App/>

);

// If you want to start measuring performance in your app, pass a function
// to log results (for example: reportWebVitals(console.log))
// or send to an analytics endpoint. Learn more: https://bit.ly/CRA-vitals
reportWebVitals();
