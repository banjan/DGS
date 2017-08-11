IsServiceHealthy()
{
	
	lr_start_transaction("AssociationService_IsServiceHealthy");

		web_service_call( "StepName=IsServiceHealthy_101",
		"SOAPMethod=AssociationService|BasicHttpBinding_IAssociationService|IsServiceHealthy",
		"ResponseParam=response",
		"Service=AssociationService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1482356944.inf",
		BEGIN_ARGUMENTS,
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);
	
	lr_end_transaction("AssociationService_IsServiceHealthy", LR_AUTO);

	return 0;
}
