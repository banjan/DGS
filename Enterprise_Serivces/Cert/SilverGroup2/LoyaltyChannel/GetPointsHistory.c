GetPointsHistory()
{
	lr_start_transaction("LoyaltyService_GetPointsHistory");

	web_service_call( "StepName=GetPointsHistory_101",
		"SOAPMethod=LoyaltyService|BasicHttpBinding_LoyaltyService|GetPointsHistory",
		"ResponseParam=response",
		"Service=LoyaltyService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1484856761.inf",
		BEGIN_ARGUMENTS,
		"xml:request="
			"<request>"
				"<MachineName>test</MachineName>"
				"<CustomerID>1276939253</CustomerID>"
				"<EndDate></EndDate>"
				"<NumberOfItemsPerPage>10</NumberOfItemsPerPage>"
				"<PageNumber>1</PageNumber>"
				"<StartDate>1999-05-31T13:20:00-05:00</StartDate>"
			"</request>",
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("LoyaltyService_GetPointsHistory", LR_AUTO);

	return 0;
}
