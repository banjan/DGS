GetDefaultConfiguration()
{
	lr_start_transaction("ConfigurationService_GetDefaultConfiguration");

	web_service_call( "StepName=GetDefaultConfiguration_101",
		"SOAPMethod=ConfigurationService|BasicHttpBinding_IConfigurationService|GetDefaultConfiguration",
		"ResponseParam=response",
		"Service=ConfigurationService1",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1485794644.inf",
		BEGIN_ARGUMENTS,
		"ConfigurationId=2",
		"ConfigurationIdSpecified=true",
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

	lr_end_transaction("ConfigurationService_GetDefaultConfiguration", LR_AUTO);

	return 0;
}
