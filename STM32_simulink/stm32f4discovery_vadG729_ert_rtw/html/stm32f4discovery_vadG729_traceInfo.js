function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "stm32f4discovery_vadG729"};
	this.sidHashMap["stm32f4discovery_vadG729"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<S1>"] = {sid: "stm32f4discovery_vadG729:1"};
	this.sidHashMap["stm32f4discovery_vadG729:1"] = {rtwname: "<S1>"};
	this.rtwnameHashMap["<Root>/Data Type Conversion 1"] = {sid: "stm32f4discovery_vadG729:12"};
	this.sidHashMap["stm32f4discovery_vadG729:12"] = {rtwname: "<Root>/Data Type Conversion 1"};
	this.rtwnameHashMap["<Root>/LED 6"] = {sid: "stm32f4discovery_vadG729:11"};
	this.sidHashMap["stm32f4discovery_vadG729:11"] = {rtwname: "<Root>/LED 6"};
	this.rtwnameHashMap["<Root>/Normalizing voice signal between -1.0 to 1.0"] = {sid: "stm32f4discovery_vadG729:50"};
	this.sidHashMap["stm32f4discovery_vadG729:50"] = {rtwname: "<Root>/Normalizing voice signal between -1.0 to 1.0"};
	this.rtwnameHashMap["<Root>/Scope"] = {sid: "stm32f4discovery_vadG729:49"};
	this.sidHashMap["stm32f4discovery_vadG729:49"] = {rtwname: "<Root>/Scope"};
	this.rtwnameHashMap["<Root>/Speech"] = {sid: "stm32f4discovery_vadG729:2"};
	this.sidHashMap["stm32f4discovery_vadG729:2"] = {rtwname: "<Root>/Speech"};
	this.rtwnameHashMap["<Root>/VAD_G729"] = {sid: "stm32f4discovery_vadG729:1"};
	this.sidHashMap["stm32f4discovery_vadG729:1"] = {rtwname: "<Root>/VAD_G729"};
	this.rtwnameHashMap["<S1>:1"] = {sid: "stm32f4discovery_vadG729:1:1"};
	this.sidHashMap["stm32f4discovery_vadG729:1:1"] = {rtwname: "<S1>:1"};
	this.rtwnameHashMap["<S1>:1:5"] = {sid: "stm32f4discovery_vadG729:1:1:5"};
	this.sidHashMap["stm32f4discovery_vadG729:1:1:5"] = {rtwname: "<S1>:1:5"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
