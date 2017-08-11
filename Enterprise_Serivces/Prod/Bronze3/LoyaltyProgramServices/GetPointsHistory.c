GetPointsHistory()
{
	lr_start_transaction("LoyaltyPointsService_GetPointsHistory");

	web_service_call( "StepName=GetPointsHistory_101",
		"SOAPMethod=LoyaltyPointsService|BasicHttpBinding_ILoyaltyPointsService|GetPointsHistory",
		"ResponseParam=response",
		"Service=LoyaltyPointsService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1488486280.inf",
		BEGIN_ARGUMENTS,
		"xml:request="
			"<request>"
				"<MachineName>test</MachineName>"
				"<CustomerID>123456</CustomerID>"
				"<NumberOfItemsPerPage>6</NumberOfItemsPerPage>"
				"<PageNumber>2</PageNumber>"
			"</request>",
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("LoyaltyPointsService_GetPointsHistory", LR_AUTO);

	return 0;
}
