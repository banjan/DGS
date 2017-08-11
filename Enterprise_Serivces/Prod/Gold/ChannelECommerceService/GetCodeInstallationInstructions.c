GetCodeInstallationInstructions()
{
	lr_start_transaction("ECommerceService_GetCodeInstallationInstructions");

	web_service_call( "StepName=GetCodeInstallationInstructions_101",
		"SOAPMethod=ECommerceService|ECommerceService|GetCodeInstallationInstructions",
		"ResponseParam=response",
		"Service=ECommerceService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1484874059.inf",
		BEGIN_ARGUMENTS,
		"xml:request="
			"<request>"
				"<MachineName>test</MachineName>"
				"<CountryCode>US</CountryCode>"
				"<International nil=\"true\"></International>"
				"<TransactionLineGuid>15124ce0-c261-4d71-8af6-cdefa6390ec7</TransactionLineGuid>"
			"</request>",
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("ECommerceService_GetCodeInstallationInstructions", LR_AUTO);

	return 0;
}
