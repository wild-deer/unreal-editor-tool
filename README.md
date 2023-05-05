# unreal-editor-tool

---

### 该插件的作用

使在场景中放置大量带有独特的数据的`mesh`更加轻松，添加`mesh`的位置、旋转和缩放信息，并保存为`json`

### 功能

* 导入`json`文件

<img src="https://jeremy233.oss-cn-beijing.aliyuncs.com/img1/%E5%BD%95%E5%88%B6_2023_05_05_17_34_55_778.gif" alt="录制_2023_05_05_17_34_55_778" style="zoom:67%;" />

* 根据`json`信息在场景中生成mesh

<img src="https://jeremy233.oss-cn-beijing.aliyuncs.com/img1/%E5%BD%95%E5%88%B6_2023_05_05_17_57_36_321.gif" alt="录制_2023_05_05_17_57_36_321" style="zoom: 67%;" />

* 将新的`actor`的位置、旋转和缩放信息，保存到`json`中

<img src="https://jeremy233.oss-cn-beijing.aliyuncs.com/img1/%E5%BD%95%E5%88%B6_2023_05_05_17_59_00_548.gif" alt="录制_2023_05_05_17_59_00_548" style="zoom:67%;" />

* 视角跳转

<img src="https://jeremy233.oss-cn-beijing.aliyuncs.com/img1/%E5%BD%95%E5%88%B6_2023_05_05_18_00_13_554.gif" alt="录制_2023_05_05_18_00_13_554" style="zoom:67%;" />

* 重置`Actor`信息

<img src="https://jeremy233.oss-cn-beijing.aliyuncs.com/img1/%E5%BD%95%E5%88%B6_2023_05_05_18_02_41_118.gif" alt="录制_2023_05_05_18_02_41_118" style="zoom:67%;" />

* 导出\保存`json`信息

  <img src="https://jeremy233.oss-cn-beijing.aliyuncs.com/img1/%E5%BD%95%E5%88%B6_2023_05_05_18_05_14_564.gif" alt="录制_2023_05_05_18_05_14_564" style="zoom:67%;" />

  + 排序、搜索和切换主题

  <img src="https://jeremy233.oss-cn-beijing.aliyuncs.com/img1/%E5%BD%95%E5%88%B6_2023_05_05_18_08_18_912.gif" alt="录制_2023_05_05_18_08_18_912" style="zoom:67%;" />

### 使用方法

* 下载[release](https://github.com/wild-deer/unreal-editor-tool/releases)

<img src="https://jeremy233.oss-cn-beijing.aliyuncs.com/img1/image-20230505181046083.png" alt="image-20230505181046083" style="zoom: 67%;" />

* 将插件解压缩，放在`unreal`项目的目录下



* 启动工程，在插件中启用`editor tool`
* 选择模式
* 导入`json`
* 添加`actor`位置信息
* 保存`actor`位置信息
* 保存\导出`json`

### 修改页面样式

* 克隆仓库

```bash
git clone https://github.com/wild-deer/unreal-editor-tool.git
```

* 用`WebStorm`打开

主界面

子界面

入口

* 修改好后打包

```bash
npm run build
```

* 复制打包文件

放在`\Plugins\UE4-EditorScriptingToolsPlugin-main\Content\HTML`目录下

<img src="https://jeremy233.oss-cn-beijing.aliyuncs.com/img1/image-20230505155704375.png" alt="image-20230505155704375" style="zoom: 67%;" />

修改完成
