import { Button, ConfigProvider } from 'antd';
import React from 'react';

const defaultData = {
    borderRadius: 6,
    colorPrimary: '#1677ff',
};
export default () => {
    const [colorPrimary, setColorPrimary] = React.useState(defaultData.colorPrimary);

    const handleButtonClick = () => {
        setColorPrimary('#000000');
    };

    return (


            <Button type="primary" onClick={handleButtonClick}>
                Submit
            </Button>
    );
};