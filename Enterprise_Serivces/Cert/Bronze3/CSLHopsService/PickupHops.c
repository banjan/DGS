PickupHops()
{
	lr_start_transaction("HopsService_PickupHops");

	web_service_call( "StepName=PickupHops_101",
		"SOAPMethod=HopsWorkflowService|BasicHttpBinding_IHopsWorkflowService|PickupHops",
		"ResponseParam=response",
		"Service=HopsWorkflowService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1484237501.inf",
		BEGIN_ARGUMENTS,
		"xml:PickupWorkflowHopsRequest="
			"<PickupWorkflowHopsRequest>"
				"<MachineName>test</MachineName>"
				"<HopsGuid>abcde</HopsGuid>"
			"</PickupWorkflowHopsRequest>",
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("HopsService_PickupHops", LR_AUTO);

	return 0;
}
