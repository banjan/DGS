CheckProductAvailabilityByGeoCode()
{
	lr_start_transaction("MobileChannel_CheckProductAvailabilityByGeoCode");
	
	web_custom_request("Check Product Availability By Geo Code",
        "URL=http://mobilechannelprod.gha.pvt/product/LOY-144/availability?lat=32.901947&lon=-97.089126", 
        "Method=GET", 
        "Resource=0", 
        "EncType=application/json", 
        "Mode=HTTP",
        LAST);
	
	lr_end_transaction("MobileChannel_CheckProductAvailabilityByGeoCode", LR_AUTO);
	
	return 0;
}
