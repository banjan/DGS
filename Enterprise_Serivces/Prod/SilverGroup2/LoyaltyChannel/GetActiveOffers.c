GetActiveOffers()
{
	lr_start_transaction("LoyaltyService_GetActiveOffers");

	web_service_call( "StepName=GetActiveOffers_101",
		"SOAPMethod=LoyaltyService|BasicHttpBinding_LoyaltyService|GetActiveOffers",
		"ResponseParam=response",
		"Service=LoyaltyService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1484846661.inf",
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

	lr_end_transaction("LoyaltyService_GetActiveOffers", LR_AUTO);

	return 0;
}
