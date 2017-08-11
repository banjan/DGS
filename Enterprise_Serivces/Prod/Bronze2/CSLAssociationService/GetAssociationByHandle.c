GetAssociationByHandle()
{
	
	lr_start_transaction("AssociationService_GetAssociationByHandle");

		web_service_call( "StepName=GetAssociationByHandle_101",
		"SOAPMethod=AssociationService|BasicHttpBinding_IAssociationService|GetAssociationByHandle",
		"ResponseParam=response",
		"Service=AssociationService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1482356794.inf",
		BEGIN_ARGUMENTS,
		"xml:request="
			"<request>"
				"<MachineName>test</MachineName>"
				"<AssociationHandle>test</AssociationHandle>"
				"<DistinguishingFactor>test</DistinguishingFactor>"
			"</request>",
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);
	
	lr_end_transaction("AssociationService_GetAssociationByHandle", LR_AUTO);

	return 0;
}
