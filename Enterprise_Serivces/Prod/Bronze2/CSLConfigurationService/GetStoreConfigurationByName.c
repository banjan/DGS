GetStoreConfigurationByName()
{
	lr_start_transaction("ConfigurationService_GetStoreConfigurationByName");

	web_service_call( "StepName=GetStoreConfigurationByName_101",
		"SOAPMethod=ConfigurationService|BasicHttpBinding_IConfigurationService|GetStoreConfigurationByName",
		"ResponseParam=response",
		"Service=ConfigurationService1",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1485554018.inf",
		BEGIN_ARGUMENTS,
		"BaseConfigName=Default",
		"StoreNumber=1363",
		"StoreNumberSpecified=true",
		"TemplateName=POS",
		"xml:CorrelationID="
			"<CorrelationID>"
				"<Text>"
					"<string>ee378a17-4acc-475e-b100-509195a48980</string>"
				"</Text>"
			"</CorrelationID>",
		"xml:MachineName="
			"<MachineName>"
				"<Text>"
					"<string>test</string>"
				"</Text>"
			"</MachineName>",
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("ConfigurationService_GetStoreConfigurationByName", LR_AUTO);

	return 0;
}
