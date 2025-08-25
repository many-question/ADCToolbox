#define LA_SDK_ERR_OK						0
//Success, No Error!!//
//�S�����~//

#define LA_SDK_ERR_LA_NOT_INITIAL			0x001
//Need to call ulaSDKInit() to initiate LA before calling other funciton//
//�ϥ�SDK�e�Х���l��LA//

#define LA_SDK_ERR_TRIGINFO					0x010
//Sample Rate Can't be 0//
//�ļ˲v���ର0//

#define LA_SDK_ERR_TOO_MANY_TRIG_CONDITION	0x011
//Too many Trigger condition, max level is 16					//
//Decrease to 8 if rising edge / falling edge condition used	//
//Decrease to 4 if Change edge condition used					//
//Ĳ�o����W�X�̤j�]�w�q�A�̤j��16���A���ϥΤW�ɩΤU���t�ɳ̤j�ȷ|�U����8��//
//�ϥ��ܤƽt�ɳ̤j�ȷ|�U����4��//

#define LA_SDK_ERR_CH_NUM_OUT_OF_RANGE		0x012
//Input Ch number is out of range//
//�]�w�W�X���\�q�D��//

#define LA_SDK_ERR_TRIGSET_CANNOT_BUILD		0x013
//Trig set build error, builded trig set over max level //
//Clear the trig set and reduce the trig condition		//
//Ĳ�o�ѼƲղ��ͥ��ѡA���ͥX�Ӫ��զX�W�XĲ�o���h�̤j�W��//
//�Э��s���ͷs��Ĳ�o�Ѽƨô�ֳ���Ĳ�o����				//

#define LA_SDK_ERR_INPUT_BAD_POINTER		0x014
//Input pointer variable is a bad pointer//
//�ǤJ�ѼƬ�bad pointer//

#define LA_SDK_ERR_INPUT_INVALID_CONDITION	0x015
//Input Trig condition is invalid, reference the following table//
//Ĳ�o����]�w���~�AĲ�o����ݬ��U�C�ƭ�//
//LA_TRIG_DONT_CARE, LA_TRIG_LOW, LA_TRIG_HIGH, LA_TRIG_RISING, LA_TRIG_FALLING, LA_TRIG_CHANGE//

#define LA_SDK_ERR_DEVICE_NOT_SUPPORT		0x016
//Current device is not support the Rising / Falling /Either Edge condition//
//�Ӿ��ؤ��䴩�W��/�U��/����ܤƽtĲ�o//

#define LA_SDK_ERR_GET_LA_DATA_ERR			0x017
//Request data from LA failed, check the USB connection//
//�qLA���o��Ʈɵo�Ϳ��~�A�i���]��usb�s�u���_//

#define LA_SDK_ERR_SAMPLE_NUM_OUT_OF_RANGE	0x018
//Specified Sample Number is out of range//
//�]�w�������I�ƶW�X�d��//

#define LA_SDK_ERR_HW_MODE_OUT_OF_RANGE		0X019
//Specified HW Mode is out of range//
//���w�w��Ѽƽd��W�X�]�w//

#define LA_SDK_ERR_INPUT_VAR_IS_NULL		0x020
//Input Variable(Pointer) is NULL//
//�ǤJ�����аѼƬ�NULL//

#define LA_SDK_ERR_VAR_NOT_READY			0x021
//Need to call ulaSDKCaputre() to get datas before ulaSDKSaveAsLawFile()//
//�I�s ulaSDKSaveAsLawFile() �e�����I�s ulaSDKCaputre() �~����o��e���ѼƻP�ƾ�//

#define LA_SDK_ERR_FILE_OPEN_FAIL			0x022
//Save File Create Error, target dir is Protected or insufficient disk space//
//�x�s�ɮץ��ѡA�ؼЦ�m�L�k�}�ҩάO����O�@//

#define LA_SDK_ERR_STATUS_GET_ERROR			0x023
//Cannot get La Current HW mode //
//�L�k���o�ثeLA���w�骬�A//

#define LA_SDK_ERR_FILE_FORMAT_ERROR		0x024
//Target file format unknown//
//���䴩���w���ɮ׮榡//

#define LA_SDK_ERR_FILE_READ_FAIL			0x025
//LAW file read error, file does not exist or is protected//
//�L�k�}��Law�ɡA�ɮפ��s�b�άO����O�@//

#define LA_SDK_ERR_OLD_VERSION				0x026
//Specified a higher version LAW file, please contact Acute for new SDK version//
//�ؼ��ɮ׬����s������LAW�ɡA���p��Acute�H���o��s��SDK�n��//

#define LA_SDK_ERR_BUFFER_TOO_SMALL			0x027
//Buffer size too small(<= 0)//
//��JBufferSize�L�p(�i��p�󵥩�0)//

#define LA_SDK_ERR_FW_TOO_OLD				0x028
//Firmware too old, please contact Acute//
//����\��L��, ���p��Acute�u�{�v//

#define LA_SDK_ERR_DELAYTRIG_OUT_OF_RANGE	0x029
//Delay Trigger is limited from 0 to 0xffffff clocks, please check the input value//
//����Ĳ�o�̤p��0, �̤j���o�W�L0xffffff��clock//

#define LA_SDK_ERR_CAPTURE_IN_PROGRESS		0x030
//The LA is still in capture operation//
//LA�ثe���b�^����//

#define LA_SDK_ERR_CAPTURE_START_FAILED		0x031
//Unable to initiate the LA capture operation//
//LA�^���u�@�Ұʥ���//

#define LA_SDK_ERR_PROCDURE_START_FAILED	0x032
//Unable to start a new procedure//
//�u�@�{�ǱҰʥ���//

#define LA_SDK_ERR_TRAN_MODE_DATA			0x033
//Can not apply Conventional data read function to Transitional data//
//�L�k�ϥΤ@����Ū���Ҧ�Ū����A�x�s���//

#define LA_SDK_ERR_CONV_MODE_DATA			0x034
//Can not apply Transitional data read function to Conventional data//
//�L�k�ϥΤ@����Ū���Ҧ�Ū����A�x�s���//

#define LA_SDK_ERR_HW_FILTER_RANGE_ERR		0x035
//The specified H/W filter value out of range, maximum value = 35ns//
//H/W Filter�]�w�W�X�d��, �̤j�Ȭ�35ns//

#define LA_SDK_ERR_TEMPLATE_FORMAT_ERROR	0x036
//The specified template file is not a valid .law file or the content was corrupted//
//Ū���O�s�ɮשҨϥΪ��˥��i���ɮɵo�Ϳ��~//

#define LA_SDK_ERR_DLL_MISSING              0x037
//Unable to find the AqLaRunw.dll or LaRun.dll//
//�L�k���T���JAqLARunw.dll�άOLaRun.dll//

#define LA_SDK_ERR_NO_DEVICE                0x038
//Unable to find any available device//
//�L�k��쥼�ϥΤ�������//

#define LA_SDK_ERR_MEMORY_SET_FAILED        0x039
//The memory usage must be multiples of 32//
//�O����ϥζq������32MB������//

#define LA_SDK_ERR_POD_NUM_INVALID          0x040
//The Pod number setting is invalid//
//POD�]�w��J�W�X�d��//

#define LA_SDK_ERR_FORCE_STOP               0x041
//Waveform capture stopped by user force stop//
//�T���^���L�{�Q�ϥΪ̱j��_//

#define LA_SDK_ERR_TRIGPOS_OUT_OF_RANGE     0x042
//Trigger position range is limited from 0 to selected memory//
//Ĳ�o�I��m�]�w�Ȥ䴩0����w���O����j�p//

#define LA_SDK_ERR_DEVICE_INDEX_OUT_OF_RANGE 0x043
//Available device index range is from 0~UPA_MAX_DEVICE//
//�i�θ˸m��m��ܽd��0~UPA_MAX_DEVICE//

#define LA_SDK_ERR_SPECIFIED_SN_NOT_FOUND   0x044
//Unable to find device with specified serial number//
//�L�k�����w�Ǹ�������//

#define LA_SDK_ERR_SWITCH_DEVICE_FAIL       0x045
//Unable to switch device while capturing//
//�b�^���L�{���L�k�����˸m//

#define LA_SDK_ERR_RESOURCE_MISSING              0x046
//Unable to find the Resource .bin file //
//�L�k���T���J.bin F/W �ɮ�//

#define LA_SDK_ERR_TRIG_FORMAT_CONV_ERROR	0x998
//Internal Trigger format convert error, contact Acute//
//Ĳ�o�榡�ഫ�o�ͤ������~�A���p��Acute�u�{�v//

#define LA_SDK_ERR_MEMORY_ACCESS_ERROR		0x999
//Internal memory copy error, contact Acute//
//�{�������o�ͤ������~�A���p��Acute�u�{�v//


