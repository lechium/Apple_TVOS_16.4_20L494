//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SignpostSupport/SignpostEvent.h>

@interface SignpostEvent (LoggingSupport)
- (id)initWithOSLogEventProxy:(id)arg1;	// IMP=0x006000000000593b
- (id)_parseMetadata:(id)arg1;	// IMP=0x0060000000005503
- (_Bool)_processName:(id)arg1 formatterName:(id)arg2 formatType:(id)arg3 value:(id)arg4;	// IMP=0x0060000000004fb6
- (unsigned long long)_extractValuesFromStr:(const char *)arg1 strlen:(unsigned long long)arg2 startIndex:(unsigned long long)arg3 results:(struct metadata_parsing_results *)arg4;	// IMP=0x0060000000004dd6
@end

