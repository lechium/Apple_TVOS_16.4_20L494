//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSSet;

__attribute__((visibility("hidden")))
@interface EKiMIPInvitation
{
    NSSet *_attendees;	// 16 = 0x10
}

+ (_Bool)shouldSendEmailForEvent:(id)arg1 withDiff:(id)arg2;	// IMP=0x0060000000116bed
- (void).cxx_destruct;	// IMP=0x00000000001172bf
- (id)emailBody;	// IMP=0x0000000000116d8b
- (id)emailSubject;	// IMP=0x0000000000116ca8
- (id)attendees;	// IMP=0x0000000000116c8b
- (id)initWithEvent:(id)arg1 withDiff:(id)arg2;	// IMP=0x0000000000116b2d

@end

