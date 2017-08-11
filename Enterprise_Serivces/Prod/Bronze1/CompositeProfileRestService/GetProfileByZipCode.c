GetProfileByZipCode()
{
	
lr_think_time(1);

	web_reg_find ("Text=Profiles", LAST );
lr_start_transaction("GetProfileByZipCode");
	web_custom_request("Get Profile By Zip Code",
        "URL=http://compositeprofilerestserviceprod.gha.pvt/v1/Profiles/LastName/Burke/Zip/75039", 
        "Method=GET", 
        "Resource=0", 
        "EncType=application/json", 
        "Mode=HTTP",
        LAST); 	
lr_end_transaction("GetProfileByZipCode", LR_AUTO);

lr_think_time(1);
	
	return 0;
}
