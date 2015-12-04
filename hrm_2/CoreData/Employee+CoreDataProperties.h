//
//  Employee+CoreDataProperties.h
//  
//
<<<<<<< HEAD
//  Created by Tahia Ata on 12/4/15.
=======
//  Created by Kazi Sharmin Dina on 12/1/15.
>>>>>>> cc4ea4f... 47023_employee_screen_designI
//
//
//  Choose "Create NSManagedObject Subclass…" from the Core Data editor menu
//  to delete and recreate this implementation file for your updated model.
//

#import "Employee.h"

NS_ASSUME_NONNULL_BEGIN

@interface Employee (CoreDataProperties)

<<<<<<< HEAD
@property (nonatomic) BOOL active;
@property (nonatomic) NSTimeInterval birthDate;
@property (nullable, nonatomic, retain) NSString *name;
@property (nullable, nonatomic, retain) NSString *phone;
@property (nullable, nonatomic, retain) NSString *placeOfBirth;
@property (nullable, nonatomic, retain) NSString *status;
@property (nullable, nonatomic, retain) Department *departmentOfEmployee;
@property (nullable, nonatomic, retain) Designation *designationOfEmployee;
=======
@property (nullable, nonatomic, retain) NSNumber *employee_id;
@property (nullable, nonatomic, retain) NSString *name;
@property (nullable, nonatomic, retain) NSNumber *departmant_id;
@property (nullable, nonatomic, retain) NSString *placeOfBirth;
@property (nullable, nonatomic, retain) NSDate *birthDate;
@property (nullable, nonatomic, retain) NSDecimalNumber *phone;
@property (nullable, nonatomic, retain) NSNumber *designation_id;
@property (nullable, nonatomic, retain) NSString *status;
@property (nullable, nonatomic, retain) NSNumber *active;
>>>>>>> cc4ea4f... 47023_employee_screen_designI

@end

NS_ASSUME_NONNULL_END
