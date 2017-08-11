GetStoreConfiguration()
{
	lr_start_transaction("ConfigurationService_GetStoreConfiguration");

	web_service_call( "StepName=GetStoreConfiguration_101",
		"SOAPMethod=ConfigurationService|BasicHttpBinding_IConfigurationService|GetStoreConfiguration",
		"ResponseParam=response",
		"Service=ConfigurationService1",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1485553330.inf",
		BEGIN_ARGUMENTS,
		"ConfigurationId=2",
		"ConfigurationIdSpecified=true",
		"StoreNumber=1363",
		"StoreNumberSpecified=true",
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

	lr_end_transaction("ConfigurationService_GetStoreConfiguration", LR_AUTO);

	return 0;
}
