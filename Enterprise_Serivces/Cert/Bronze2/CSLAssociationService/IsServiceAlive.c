IsServiceAlive()
{
	
	lr_start_transaction("AssociationService_IsServiceAlive");

		web_service_call( "StepName=IsServiceAlive_101",
		"SOAPMethod=AssociationService|BasicHttpBinding_IAssociationService|IsServiceAlive",
		"ResponseParam=response",
		"Service=AssociationService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1482356926.inf",
		BEGIN_ARGUMENTS,
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);
	
	lr_end_transaction("AssociationService_IsServiceAlive", LR_AUTO);

	return 0;
}
