GetStoreConfigurationByName()
{
	lr_start_transaction("StoreService_GetStoreConfigurationByName");

	web_service_call( "StepName=GetStoreConfigurationByName_101",
		"SOAPMethod=StoreService|StoreService|GetStoreConfigurationByName",
		"ResponseParam=response",
		"Service=StoreService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1484885254.inf",
		BEGIN_ARGUMENTS,
		"xml:request="
			"<request>"
				"<MachineName>test</MachineName>"
				"<BaseConfigName>Default</BaseConfigName>"
				"<StoreNumber>1363</StoreNumber>"
				"<TemplateName>POS</TemplateName>"
			"</request>",
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("StoreService_GetStoreConfigurationByName", LR_AUTO);

	return 0;
}
