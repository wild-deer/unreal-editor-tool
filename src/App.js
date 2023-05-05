// App.js
import {React, useState} from "react";
import { HashRouter,Route,Routes} from "react-router-dom";
import MyMenu from "./menu";
import MySubMenu from "./submenu";
import Test from "./test";
import './App.css';


// 定义根组件
function App() {

    return (


        <HashRouter>
            {/* 定义路由 */}
            <Routes>
                <Route path="/editor" element={<MyMenu />}/>
                <Route path="/rotate" element={<MySubMenu />} />
                <Route path="/test" element={<Test />}/>
            </Routes>

        </HashRouter>

    );
}

export default App;