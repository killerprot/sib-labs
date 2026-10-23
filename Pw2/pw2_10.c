#include <stdio.h>
#include <stdint.h>

int main(void)
{
    int packet_id;
    int status_input;   
    uint8_t status;
    float voltage;
    uint16_t checksum;

    
    scanf("%x %o %f", &packet_id, &status_input, &voltage);

    status = (uint8_t)status_input;  
    
    checksum = packet_id + status;   

    printf("PACKET_ID: %d\n", packet_id);
    printf("STATUS_CODE: %u\n", (unsigned int)status);
    printf("STATUS_CHAR: %c\n", status);
    printf("VOLTAGE: %.2f\n", voltage);
    printf("CHECKSUM: %u\n", (unsigned int)checksum);

    return 0;
}
