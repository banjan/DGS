RemoveAssociation()
{
	
	lr_start_transaction("AssociationService_RemoveAssociation");

		web_service_call( "StepName=RemoveAssociation_101",
		"SOAPMethod=AssociationService|BasicHttpBinding_IAssociationService|RemoveAssociation",
		"ResponseParam=response",
		"Service=AssociationService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1482356978.inf",
		BEGIN_ARGUMENTS,
		"xml:request="
			"<request>"
				"<MachineName>test</MachineName>"
				"<AssociationHandle>abcde</AssociationHandle>"
				"<DistinguishingFactor>abcde</DistinguishingFactor>"
			"</request>",
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);
	
	lr_end_transaction("AssociationService_RemoveAssociation", LR_AUTO);

	return 0;
}
