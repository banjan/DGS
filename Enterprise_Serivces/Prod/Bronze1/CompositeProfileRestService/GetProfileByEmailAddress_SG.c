GetProfileByEmailAddress_SG()
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
	
	return 0;
}
