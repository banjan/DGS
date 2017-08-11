SendPointsActivity()
{
	lr_start_transaction("SendPointsActivity");
		web_custom_request("Send Points Activity",
        "URL=http://partnerchannelqa1.testgs.pvt/loyalty/PointsActivity?token=704EB0F6-7EA7-4691-9D22-CEC10CF4EC5C&clientKey=F3C25177-1740-412C-8FE7-36B1D6C92AFE", 
        "Method=POST", 
        "Resource=0", 
        "EncType=application/json", 
        "Mode=HTTP",
        LAST); 
	lr_end_transaction("SendPointsActivity", LR_AUTO);

	return 0;
}
