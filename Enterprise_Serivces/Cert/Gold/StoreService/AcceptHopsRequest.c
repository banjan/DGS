AcceptHopsRequest()
{
	lr_start_transaction("StoreService_AcceptHopsRequest");

	web_service_call( "StepName=AcceptHopsRequest_101",
		"SOAPMethod=StoreService|StoreService|AcceptHopsRequest",
		"ResponseParam=response",
		"Service=StoreService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1484884463.inf",
		BEGIN_ARGUMENTS,
		"xml:request="
			"<request>"
				"<MachineName>test</MachineName>"
				"<CountryCode>US</CountryCode>"
				"<Employee>"
					"<EmployeeInitials>TST</EmployeeInitials>"
					"<EmployeeNumber>1234567</EmployeeNumber>"
				"</Employee>"
				"<HopsRequestId>7d85bc5c-6994-4d3d-948a-4f7f1dca67b9</HopsRequestId>"
				"<PickupExpirationDate>2017-01-21T00:00:00</PickupExpirationDate>"
				"<StoreNumber>9942</StoreNumber>"
			"</request>",
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("StoreService_AcceptHopsRequest", LR_AUTO);

	return 0;
}
