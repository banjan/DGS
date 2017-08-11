UpdateInventory()
{
	lr_start_transaction("StoreInformationService_UpdateInventory");

	web_service_call( "StepName=UpdateInventory_101",
		"SOAPMethod=StoreInformationService|BasicHttpBinding_IStoreInformationService|UpdateInventory",
		"ResponseParam=response",
		"Service=StoreInformationService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1484798759.inf",
		BEGIN_ARGUMENTS,
		"xml:request="
			"<request>"
				"<MachineName>test</MachineName>"
				"<CountryCode>US</CountryCode>"
				"<InventoryItems>"
					"<InventoryItem>"
						"<Sku>952123</Sku>"
						"<ProductId>16158</ProductId>"
						"<DefectiveQty>0</DefectiveQty>"
						"<SellableQty>2</SellableQty>"
						"<TradeHoldSellableQty>0</TradeHoldSellableQty>"
						"<TradeHoldDefectiveQty>0</TradeHoldDefectiveQty>"
						"<ReservedQty>0</ReservedQty>"
					"</InventoryItem>"
				"</InventoryItems>"
				"<StoreNumber>6</StoreNumber>"
			"</request>",
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("StoreInformationService_UpdateInventory", LR_AUTO);

	return 0;
}
