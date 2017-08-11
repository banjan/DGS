GetAvailablePointsBalance()
{
	lr_start_transaction("LoyaltyService_GetAvailablePointsBalance");

	web_service_call( "StepName=GetAvailablePointsBalance_101",
		"SOAPMethod=LoyaltyService|BasicHttpBinding_LoyaltyService|GetAvailablePointsBalance",
		"ResponseParam=response",
		"Service=LoyaltyService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1484855485.inf",
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

	lr_end_transaction("LoyaltyService_GetAvailablePointsBalance", LR_AUTO);

	return 0;
}
