CREATE TABLE `mu_online`.`INWENTORY` (
	`U_ID` INT NOT NULL AUTO_INCREMENT,
	`U_CHAR_ID` INT DEFAULT 0 NOT NULL,
	`U_ITEM_COUT` INT DEFAULT 0 NOT NULL,
	`U_ITEM1` VARCHAR(255) DEFAULT ''  ,
	`U_ITEM2` VARCHAR(255) DEFAULT ''  ,
	PRIMARY KEY (`U_ID`)
) ENGINE=MYISAM

