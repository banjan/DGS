AcceptHops()
{
	lr_start_transaction("HopsService_AcceptHops");

	web_service_call( "StepName=AcceptHops_102",
		"SOAPMethod=HopsWorkflowService|BasicHttpBinding_IHopsWorkflowService|AcceptHops",
		"ResponseParam=response",
		"Service=HopsWorkflowService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1483061619.inf",
		BEGIN_ARGUMENTS,
		"xml:AcceptWorkflowHopsRequest="
			"<AcceptWorkflowHopsRequest>"
				"<MachineName>test</MachineName>"
				"<EmployeeInitials>TEE</EmployeeInitials>"
				"<EmployeeNumber>500223</EmployeeNumber>"
				"<HopsRequestID>1ca8cc70-b756-43bb-a692-ce27c8afabf1</HopsRequestID>"
				"<PickupExpirationDate>2015-09-15T00:00:00</PickupExpirationDate>"
				"<StoreCountryCode>US</StoreCountryCode>"
				"<StoreNumber>9942</StoreNumber>"
			"</AcceptWorkflowHopsRequest>",
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("HopsService_AcceptHops", LR_AUTO);

	return 0;
}
