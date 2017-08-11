GetNumber_SG()
{
	web_reg_find ("Text=LoyaltyNumber>{LoyaltyValidation}", LAST );
	lr_start_transaction("GetNumber_SG");
		web_custom_request("Get Number",
        "URL=http://partnerchannelqa1.testgs.pvt/loyalty/Number/3876952402141?token=704EB0F6-7EA7-4691-9D22-CEC10CF4EC5C&clientKey=F3C25177-1740-412C-8FE7-36B1D6C92AFE", 
        "Method=GET", 
        "Resource=0", 
        "EncType=application/json", 
        "Mode=HTTP",
        LAST);
	lr_end_transaction("GetNumber_SG", LR_AUTO);
	
	return 0;
}
