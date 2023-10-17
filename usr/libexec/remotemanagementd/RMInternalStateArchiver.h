//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSPersistentContainer, NSPersistentHistoryToken, NSString, RMPersistentActiveIdentifiers;

@interface RMInternalStateArchiver : NSObject
{
    NSPersistentContainer *_persistentContainer;	// 8 = 0x8
}

+ (id)sharedArchiver;	// IMP=0x002000000004521e
- (void).cxx_destruct;	// IMP=0x0020000000045938
@property(readonly, nonatomic) NSPersistentContainer *persistentContainer; // @synthesize persistentContainer=_persistentContainer;
- (id)_unarchiveObjectOfClasses:(id)arg1 forKey:(id)arg2;	// IMP=0x001000000004582b
- (id)_unarchiveObjectOfClass:(Class)arg1 forKey:(id)arg2;	// IMP=0x0010000000045730
- (void)_archiveObject:(id)arg1 forKey:(id)arg2;	// IMP=0x001000000004563f
- (void)pushController:(id)arg1 didChangePushTokenByEnvironmentName:(id)arg2;	// IMP=0x001000000004562a
- (void)internalStatusPublisher:(id)arg1 didChangeCommandAndDeclarationsPersistentHistoryToken:(id)arg2;	// IMP=0x0010000000045615
- (void)internalStatusPublisher:(id)arg1 didChangeDeviceStatusByKeyPath:(id)arg2;	// IMP=0x0010000000045600
- (void)configurationPublisher:(id)arg1 didChangePersistentActiveIdentifiers:(id)arg2;	// IMP=0x00100000000455eb
- (id)initWithPersistentContainer:(id)arg1;	// IMP=0x0010000000045580
@property(retain, nonatomic) NSDictionary *pushTokenByEnvironmentName;
@property(retain, nonatomic) RMPersistentActiveIdentifiers *persistentActiveIdentifiers;
@property(retain, nonatomic) NSDictionary *deviceStatusByKeyPath;
@property(retain, nonatomic) NSPersistentHistoryToken *commandAndDeclarationStatusPersistentHistoryToken;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

