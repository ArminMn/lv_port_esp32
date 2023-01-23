// esp_err_t ret;

    //     // Options for mounting the filesystem.
    //     // If format_if_mount_failed is set to true, SD card will be partitioned and
    //     // formatted in case when mounting fails.
    //     esp_vfs_fat_sdmmc_mount_config_t mount_config = {
    // #ifdef CONFIG_EXAMPLE_FORMAT_IF_MOUNT_FAILED
    //         .format_if_mount_failed = true,
    // #else
    //         .format_if_mount_failed = false,
    // #endif // EXAMPLE_FORMAT_IF_MOUNT_FAILED
    //         .max_files = 5,
    //         .allocation_unit_size = 16 * 1024};
    //     sdmmc_card_t *card;
    // const char mount_point[] = MOUNT_POINT;
    //     ESP_LOGI(TAG, "Initializing SD card");

    //     // Use settings defined above to initialize SD card and mount FAT filesystem.
    //     // Note: esp_vfs_fat_sdmmc/sdspi_mount is all-in-one convenience functions.
    //     // Please check its source code and implement error recovery when developing
    //     // production applications.
    //     ESP_LOGI(TAG, "Using SPI peripheral");

    // sdmmc_host_t host = SDSPI_HOST_DEFAULT();
    //     /*
    //         max_freq_khz = 20MHz
    //         sdspi_host_init_device() to attach and initialize an SD SPI device on the specific SPI bus.
    //     */
    //     host.max_freq_khz = 10000; // Max frequency of 20MHz will result in: Failed to initialize the card (ESP_ERR_INVALID_RESPONSE). Make sure SD card lines have pull-up resistors in place.

    //     spi_bus_config_t bus_cfg = {
    //         .mosi_io_num = PIN_NUM_MOSI,
    //         .miso_io_num = PIN_NUM_MISO,
    //         .sclk_io_num = PIN_NUM_CLK,
    //         .quadwp_io_num = -1, // Write Protect
    //         .quadhd_io_num = -1, // GPIO pin for HD (Hold) signal
    //         .max_transfer_sz = 4000,
    //     };

    //     ret = spi_bus_initialize(host.slot, &bus_cfg, SDSPI_DEFAULT_DMA); // SDSPI_DEFAULT_DMA
    //     if (ret != ESP_OK)
    //     {
    //         ESP_LOGE(TAG, "Failed to initialize bus.");
    //         return;
    //     }

    //     // This initializes the slot without card detect (CD) and write protect (WP) signals.
    //     // Modify slot_config.gpio_cd and slot_config.gpio_wp if your board has these signals.
    //     sdspi_device_config_t slot_config = SDSPI_DEVICE_CONFIG_DEFAULT();
    //     slot_config.gpio_cs = PIN_NUM_CS;
    //     slot_config.host_id = host.slot;

    // sdspi_device_config_t device_config = SDSPI_DEVICE_CONFIG_DEFAULT();
    // device_config.host_id = SPI2_HOST;
    // device_config.gpio_cs = 33;

    // ESP_LOGI(TAG, "Initializing SD card");
    // sdmmc_host_t host = SDSPI_HOST_DEFAULT();
    // host.slot = device_config.host_id;

    // spi_bus_config_t bus_cfg = {
    //     // .mosi_io_num = PIN_NUM_MOSI,
    //     // .miso_io_num = PIN_NUM_MISO,
    //     // .sclk_io_num = PIN_NUM_CLK,
    //     .quadwp_io_num = -1, // Write Protect
    //     .quadhd_io_num = -1, // GPIO pin for HD (Hold) signal
    //     .max_transfer_sz = 4000,
    // };

    // ret = spi_bus_initialize(host.slot, &bus_cfg, SDSPI_DEFAULT_DMA); // SDSPI_DEFAULT_DMA

    // esp_vfs_fat_mount_config_t mount_config =
    // {
    // #ifdef CONFIG_EXAMPLE_FORMAT_IF_MOUNT_FAILED
    //     .format_if_mount_failed = true,
    // #else
    //     .format_if_mount_failed = false,
    // #endif
    //     .max_files = 5,
    //     .allocation_unit_size = 16 * 1024
    // };

    // ESP_LOGI(TAG, "Mounting filesystem");
    // ret = esp_vfs_fat_sdspi_mount(mount_point, &host, &device_config, &mount_config, &sdcard);

    // sdspi_device_config_t slot_config = SDSPI_DEVICE_CONFIG_DEFAULT();
    // slot_config.host_id = SPI2_HOST;
    // slot_config.gpio_cs = 33;

    // -------------------------------------------------------------

    // ESP_LOGI(TAG, "Initializing SD card");
    // sdmmc_host_t host = SDSPI_HOST_DEFAULT();
    // host.slot = slot_config.host_id;

    // sdmmc_host_t host = SDSPI_HOST_DEFAULT();
    // sdspi_slot_config_t slot_config = SDSPI_SLOT_CONFIG_DEFAULT();
    // slot_config.gpio_miso = PIN_NUM_MISO;
    // slot_config.gpio_mosi = PIN_NUM_MOSI;
    // slot_config.gpio_sck  = PIN_NUM_CLK;
    // slot_config.gpio_cs   = PIN_NUM_CS;
    

    // esp_vfs_fat_mount_config_t mount_config =
    // {
    // #ifdef CONFIG_EXAMPLE_FORMAT_IF_MOUNT_FAILED
    //     .format_if_mount_failed = true,
    // #else
    //     .format_if_mount_failed = false,
    // #endif
    //     .max_files = 5,
    //     .allocation_unit_size = 16 * 1024
    // };

    // sdmmc_card_t *card;
    // printf("esp_vfs_fat_sdmmc_mount in progress... \n");
    // esp_err_t ret = esp_vfs_fat_sdmmc_mount("/sdcard", &host, &slot_config, &mount_config, &sdcard);
    // printf("Done \n");

    // ---------------------------------------------------------------

    // sdspi_device_config_t device_config = SDSPI_DEVICE_CONFIG_DEFAULT();
    // device_config.host_id = SPI2_HOST;
    // device_config.gpio_cs = 33;  

    // ESP_LOGI(TAG, "Initializing SD card");
    // sdmmc_host_t host = SDSPI_HOST_DEFAULT();
    // host.slot = device_config.host_id;

    // esp_vfs_fat_mount_config_t mount_config = 
    // {
    // #ifdef CONFIG_EXAMPLE_FORMAT_IF_MOUNT_FAILED
    //     .format_if_mount_failed = true,
    // #else
    //     .format_if_mount_failed = false,
    // #endif
    //     .max_files = 5,
    //     .allocation_unit_size = 16 * 1024
    // };

    // //sdmmc_card_t* card;
    // ESP_LOGI(TAG, "Mounting filesystem");
    // const char mount_point[] = MOUNT_POINT;
    // esp_err_t ret = esp_vfs_fat_sdspi_mount(mount_point, &host, &device_config, &mount_config, &sdcard);

    // ---------------------------------------------------------------