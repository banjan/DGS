GetStoreConfiguration()
{
	web_service_call( "StepName=GetStoreConfiguration_101",
		"SOAPMethod=ConfigurationService_vs0_vs0|ConfigurationServicePort|GetStoreConfiguration",
		"ResponseParam=response",
		"Service=ConfigurationService_vs0_vs0",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1487871909.inf",
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

	
	return 0;
}
