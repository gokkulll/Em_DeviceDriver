{
    aliases {
        ethernet0: &eth0;
        pci0: &pci0;
    };
    node0 {
        string-property: "this is a string";
        byte-data-property: "[0x01 0x02]";
        string-list-property: "string 1", "string 2";
        phandle: <&label>
        
        child-node0 {
            child-property-1;
            reference-child-node-2: <&node0>
        };
    };
};

