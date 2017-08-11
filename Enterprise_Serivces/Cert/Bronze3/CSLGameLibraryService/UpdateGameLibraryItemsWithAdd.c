UpdateGameLibraryItemsWithAdd()
{
	lr_start_transaction("GameLibraryService_UpdateGameLibraryItemsWithAdd");

	web_service_call( "StepName=UpdateGameLibraryItems_101",
		"SOAPMethod=GameLibraryService|BasicHttpBinding_IGameLibraryService|UpdateGameLibraryItems",
		"ResponseParam=response",
		"Service=GameLibraryService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1482859846.inf",
		BEGIN_ARGUMENTS,
		"xml:request="
			"<request>"
				"<MachineName>test</MachineName>"
				"<CustomerID>1</CustomerID>"
				"<Updates>"
					"<GameLibraryItemUpdate>"
						"<Action>Add</Action>"
						"<Item>"
							"<List>WishToOwn</List>"
							"<ProductID>1</ProductID>"
							"<SKU>999999</SKU>"
							"<Title>test</Title>"
						"</Item>"
					"</GameLibraryItemUpdate>"
				"</Updates>"
			"</request>",
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("GameLibraryService_UpdateGameLibraryItemsWithAdd", LR_AUTO);
	
	lr_think_time(2);
	
	lr_start_transaction("GameLibraryService_UpdateGameLibraryItemsWithDelete");

	web_service_call( "StepName=UpdateGameLibraryItems_102",
		"SOAPMethod=GameLibraryService|BasicHttpBinding_IGameLibraryService|UpdateGameLibraryItems",
		"ResponseParam=response",
		"Service=GameLibraryService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1482966190.inf",
		BEGIN_ARGUMENTS,
		"xml:request="
			"<request>"
				"<MachineName>test</MachineName>"
				"<CustomerID>1</CustomerID>"
				"<Updates>"
					"<GameLibraryItemUpdate>"
						"<Action>Delete</Action>"
						"<Item>"
							"<List>WishToOwn</List>"
							"<ProductID>1</ProductID>"
							"<SKU>999999</SKU>"
							"<Title>test</Title>"
						"</Item>"
					"</GameLibraryItemUpdate>"
				"</Updates>"
			"</request>",
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("GameLibraryService_UpdateGameLibraryItemsWithDelete", LR_AUTO);

	return 0;
}
