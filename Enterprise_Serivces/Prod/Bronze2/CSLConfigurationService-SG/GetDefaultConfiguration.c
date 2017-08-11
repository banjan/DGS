GetDefaultConfiguration()
{
	lr_start_transaction("ConfigurationService_GetDefaultConfiguration");

	web_service_call( "StepName=GetDefaultConfiguration_101",
		"SOAPMethod=ConfigurationService_vs0_vs0|ConfigurationServicePort|GetDefaultConfiguration",
		"ResponseParam=response",
		"Service=ConfigurationService_vs0_vs0",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1485550552.inf",
		BEGIN_ARGUMENTS,
		"ConfigurationIdSpecified=false",
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
