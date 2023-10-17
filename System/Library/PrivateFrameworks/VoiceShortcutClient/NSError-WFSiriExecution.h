//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSError.h>

@interface NSError (WFSiriExecution)
+ (id)wfSiriExecutionRequiresShortcutsJrError;	// IMP=0x0060000000046e90
+ (id)vc_voiceShortcutErrorWithCode:(long long)arg1 underlyingError:(id)arg2;	// IMP=0x0060000000055fd9
+ (id)vc_partialPersistenceErrorWithPartialErrors:(id)arg1;	// IMP=0x0060000000055f03
+ (id)vc_persistenceErrorWithUnderlyingError:(id)arg1;	// IMP=0x0060000000055ee9
+ (id)_vc_voiceShortcutErrorWithCode:(long long)arg1 extraUserInfo:(id)arg2 reason:(id)arg3;	// IMP=0x0060000000055e19
+ (id)vc_voiceShortcutErrorWithCode:(long long)arg1 extraUserInfo:(id)arg2 reason:(id)arg3;	// IMP=0x0060000000055cc7
+ (id)vc_voiceShortcutErrorWithCode:(long long)arg1 reason:(id)arg2;	// IMP=0x0060000000055ba8
+ (id)vc_voiceShortcutErrorWithCode:(long long)arg1 underlyingError:(id)arg2 reason:(id)arg3;	// IMP=0x0060000000055a12
- (_Bool)wf_isRequiresShortcutsJrError;	// IMP=0x0010000000046e21
- (_Bool)vc_isFileAlreadyExists;	// IMP=0x0010000000055934
- (_Bool)vc_isFileNotFound;	// IMP=0x0010000000055842
@end

