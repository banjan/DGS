Gateway()
{

lr_think_time(1);

	web_reg_find ("Text=EmailAddress", LAST );
lr_start_transaction("GetProfileByEmailAddress");
	web_custom_request("Get Profile By Email Address",
        "URL=https://gateway.gha.pvt/v1/Profiles/Email/zach.r.burke@gmail.com", 
        "Method=GET", 
        "Resource=0", 
        "EncType=application/json", 
        "Mode=HTTP",
        LAST); 	
lr_end_transaction("GetProfileByEmailAddress", LR_AUTO);

lr_think_time(1);

	web_reg_find ("Text=ProfileID", LAST );
lr_start_transaction("GetProfileByProfileID");
	web_custom_request("Get Profile By Profile ID",
        "URL=https://gateway.gha.pvt/v1/Profiles/1254195507", 
        "Method=GET", 
        "Resource=0", 
        "EncType=application/json", 
        "Mode=HTTP",
        LAST); 	
lr_end_transaction("GetProfileByProfileID", LR_AUTO);

lr_think_time(1);

	web_reg_find ("Text=Profiles", LAST );
lr_start_transaction("GetProfileByZipCode");
	web_custom_request("Get Profile By Zip Code",
        "URL=https://gateway.gha.pvt/v1/Profiles/LastName/Burke/Zip/75039", 
        "Method=GET", 
        "Resource=0", 
        "EncType=application/json", 
        "Mode=HTTP",
        LAST); 	
lr_end_transaction("GetProfileByZipCode", LR_AUTO);

lr_think_time(1);

	return 0;
}
