//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface VN4nFZhnOcBOiJmeVWzBWsv
{
}

+ (unsigned int)analysisPixelFormatTypeForConfiguration:(id)arg1;	// IMP=0x008000000006ec95
+ (id)inputImageBlobNameForConfiguration:(id)arg1;	// IMP=0x008000000006ec88
+ (id)modelNameForConfiguration:(id)arg1;	// IMP=0x008000000006ec7b
- (id)observationsForLastAnalysisOfImageAnalyzer:(void *)arg1 processOptions:(id)arg2 originatingRequestSpecifier:(id)arg3 qosClass:(unsigned int)arg4 error:(id *)arg5;	// IMP=0x000000000006d5e0
- (unsigned int)analysisTypesForProcessOptions:(id)arg1;	// IMP=0x000000000006d5d5
- (_Bool)configureImageAnalyzerOptions:(void *)arg1 error:(id *)arg2;	// IMP=0x000000000006d564
- (_Bool)supportsProcessingDevice:(id)arg1;	// IMP=0x000000000006d505

@end
