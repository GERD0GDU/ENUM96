// Enum96Test.cpp : Defines the entry point for the console application.
//

#include "ENUM96.inl"

//
// DirectShowDeviceType
// ENUM96 sample definition
//
ENUM96(DirectShowDeviceType, unsigned int,
	None = 0,
	Input = 1,    // Capture
	Output = 2,   // Renderer
	Video = 4,    // Video support
	Audio = 8     // Audio support
	);

int main(int argc, char* argv[])
{
	DirectShowDeviceType eDevType = DirectShowDeviceType::Input
		| DirectShowDeviceType::Video
		| DirectShowDeviceType::Audio;

	printf("[ENUM96 Test]\n\n");

	_tprintf(_T("> %-24s --> \"%s\" (%u)\n"), _T("ToString()")
		, eDevType.ToString()
		, eDevType.ToUInt32());

	printf("> %-24s --> %s\n", "HasFlag(Output)",
		eDevType.HasFlag(DirectShowDeviceType::Output)
		? "true"
		: "false");

	printf("> %-24s --> %s\n", "HasFlag(Input)",
		eDevType.HasFlag(DirectShowDeviceType::Input)
		? "true"
		: "false");

	printf("> %-24s --> %s\n", "HasFlag(Video)",
		eDevType.HasFlag(DirectShowDeviceType::Video)
		? "true"
		: "false");

	printf("> %-24s --> %s\n", "HasFlag(Audio)",
		eDevType.HasFlag(DirectShowDeviceType::Audio)
		? "true"
		: "false");

	printf("> %-24s --> %s\n", "HasFlag(Input | Audio)",
		eDevType.HasFlag(DirectShowDeviceType::Input | DirectShowDeviceType::Audio)
		? "true"
		: "false");

	printf("> %-24s --> %s\n", "HasFlag(Input | Video)",
		eDevType.HasFlag(DirectShowDeviceType::Input | DirectShowDeviceType::Video)
		? "true"
		: "false");

	printf("> %-24s --> %s\n", "HasFlag(Video | Audio)",
		eDevType.HasFlag(DirectShowDeviceType::Video | DirectShowDeviceType::Audio)
		? "true"
		: "false");

	printf("\n");
	printf("> // Remove 'Video' flag\n");
	eDevType &= ~DirectShowDeviceType::Video;

	_tprintf(_T("> %-24s --> \"%s\"\n"), _T("ToString()")
		, eDevType.ToString());

	printf("> %-24s --> %s\n", "HasFlag(Video)",
		eDevType.HasFlag(DirectShowDeviceType::Video)
		? "true"
		: "false");

	printf("> %-24s --> %s\n", "HasFlag(Video | Audio)",
		eDevType.HasFlag(DirectShowDeviceType::Video | DirectShowDeviceType::Audio)
		? "true"
		: "false");

	printf("\n");
	printf("> // List ENUM members\n");
	printf("> %-24s --> %u\n", "MemberCount",
		eDevType.GetMemberCount());
	for (int i = 0; i < eDevType.GetMemberCount(); i++) {
		DirectShowDeviceType eMember = eDevType.GetMember(i);
		_tprintf(_T("  [%u] %s\n"), eMember.ToUInt32(), eMember.ToString());
	}

	getchar();
	return 0;
}