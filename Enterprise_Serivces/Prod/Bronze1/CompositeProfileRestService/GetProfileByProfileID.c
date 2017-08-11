GetProfileByProfileID()
{
	
lr_think_time(1);

	web_reg_find ("Text=ProfileID", LAST );
lr_start_transaction("GetProfileByProfileID");
	web_custom_request("Get Profile By Profile ID",
        "URL=http://compositeprofilerestserviceprod.gha.pvt/v1/Profiles/1131768783", 
        "Method=GET", 
        "Resource=0", 
        "EncType=application/json", 
        "Mode=HTTP",
        LAST); 	
lr_end_transaction("GetProfileByProfileID", LR_AUTO);

lr_think_time(1);
	
	return 0;
}
