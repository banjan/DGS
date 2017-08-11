GetGameLibrary()
{
	lr_start_transaction("LoyaltyService_GetGameLibrary");

	web_service_call( "StepName=GetGameLibrary_101",
		"SOAPMethod=LoyaltyService|BasicHttpBinding_LoyaltyService|GetGameLibrary",
		"ResponseParam=response",
		"Service=LoyaltyService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1487019436.inf",
		BEGIN_ARGUMENTS,
		"xml:request="
			"<request>"
				"<MachineName>test</MachineName>"
				"<CustomerID>1276939253</CustomerID>"
			"</request>",
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("LoyaltyService_GetGameLibrary", LR_AUTO);

	return 0;
}
