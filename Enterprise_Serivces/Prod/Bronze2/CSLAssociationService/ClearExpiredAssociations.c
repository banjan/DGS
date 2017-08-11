ClearExpiredAssociations()
{
	
	lr_start_transaction("AssociationService_ClearExpiredAssociations");
		web_service_call( "StepName=ClearExpiredAssociations_101",
		"SOAPMethod=AssociationService|BasicHttpBinding_IAssociationService|ClearExpiredAssociations",
		"ResponseParam=response",
		"Service=AssociationService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1482354709.inf",
		BEGIN_ARGUMENTS,
		"xml:request="
			"<request>"
				"<MachineName>test</MachineName>"
				"<Days>1</Days>"
			"</request>",
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);
	lr_end_transaction("AssociationService_ClearExpiredAssociations", LR_AUTO);
	
	return 0;
}
