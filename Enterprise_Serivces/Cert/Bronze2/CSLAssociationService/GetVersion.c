GetVersion()
{
	
	lr_start_transaction("AssociationService_GetVersion");

		web_service_call( "StepName=GetVersion_101",
		"SOAPMethod=AssociationService|BasicHttpBinding_IAssociationService|GetVersion",
		"ResponseParam=response",
		"Service=AssociationService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1482356904.inf",
		BEGIN_ARGUMENTS,
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);
	
	lr_end_transaction("AssociationService_GetVersion", LR_AUTO);

	return 0;
}
