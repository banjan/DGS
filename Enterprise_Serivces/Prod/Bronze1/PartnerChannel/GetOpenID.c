GetOpenID()
{
	lr_start_transaction("GetOpenID");
		web_custom_request("Get Open ID",
        "URL=http://partnerchannelqa1.testgs.pvt/loyalty/Openid?id=/ID/Fs6v7TalHk_qips_AGUhuw&token=704EB0F6-7EA7-4691-9D22-CEC10CF4EC5C&clientKey=F3C25177-1740-412C-8FE7-36B1D6C92AFE", 
        "Method=GET", 
        "Resource=0", 
        "EncType=application/json", 
        "Mode=HTTP",
        LAST);
	lr_end_transaction("GetOpenID", LR_AUTO);

	return 0;
}
