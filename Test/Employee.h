//
//  Employee.h
//  SimpleData
//
//  Created by Brian Collins on 09-10-05.
//  Copyright 2009 Brian Collins. All rights reserved.
//

#import <CoreData/CoreData.h>
#import "SimpleModel.h"

@interface Employee :  SimpleModel  {
}

@property (nonatomic, retain) NSNumber * smoker;
@property (nonatomic, retain) NSString * favoriteColor;
@property (nonatomic, retain) NSString * bloodType;
@property (nonatomic, retain) NSString * starSign;
@property (nonatomic, retain) NSDate * dateOfBirth;
@property (nonatomic, retain) NSString * email;
@property (nonatomic, retain) NSDate * updatedAt;
@property (nonatomic, retain) NSDate * createdAt;
@property (nonatomic, retain) NSString * name;

@end



