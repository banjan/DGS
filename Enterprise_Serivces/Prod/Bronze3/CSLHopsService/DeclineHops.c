DeclineHops()
{
	lr_start_transaction("HopsService_DeclineHops");

	web_service_call( "StepName=DeclineHops_101",
		"SOAPMethod=HopsWorkflowService|BasicHttpBinding_IHopsWorkflowService|DeclineHops",
		"ResponseParam=response",
		"Service=HopsWorkflowService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1484237048.inf",
		BEGIN_ARGUMENTS,
		"xml:DeclineWorkflowHopsRequest="
			"<DeclineWorkflowHopsRequest>"
				"<MachineName>test</MachineName>"
				"<EmployeeInitials>TST</EmployeeInitials>"
				"<EmployeeNumber>1234</EmployeeNumber>"
				"<HopsRequestID>477a192a-0fbc-4497-9750-cbcb09f48b4d</HopsRequestID>"
				"<StoreCountryCode>US</StoreCountryCode>"
				"<StoreNumber>1032</StoreNumber>"
			"</DeclineWorkflowHopsRequest>",
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("HopsService_DeclineHops", LR_AUTO);

	return 0;
}
