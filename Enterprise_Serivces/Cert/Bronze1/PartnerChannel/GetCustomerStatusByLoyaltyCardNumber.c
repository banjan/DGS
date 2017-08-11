GetCustomerStatusByLoyaltyCardNumber()
{
	lr_start_transaction("GetCustomerStatusByLoyaltyCardNumber");
		web_custom_request("Get Customer Status By Loyalty Card Number",
        "URL=http://partnerchannelprod.gha.pvt/loyalty/Number/3946422250586?token=token&clientkey=0DAB1F97-EAD1-475B-A201-E54289565E55",
        "Method=GET", 
        "Resource=0", 
        "EncType=application/json", 
        "Mode=HTTP",
        LAST); 
	lr_end_transaction("GetCustomerStatusByLoyaltyCardNumber", LR_AUTO);
	
	return 0;
}
