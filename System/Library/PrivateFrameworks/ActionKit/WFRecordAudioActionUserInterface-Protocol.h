//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ActionKit/WFActionRemoteUserInterface-Protocol.h>

@protocol WFRecordAudioActionUserInterface <WFActionRemoteUserInterface>
- (void)showWithOutputFormat:(long long)arg1 startImmediately:(_Bool)arg2 recordingDuration:(double)arg3 completionHandler:(void (^)(WFFileRepresentation *, NSError *))arg4;
@end

