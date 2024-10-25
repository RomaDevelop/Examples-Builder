5. Картинка в ячейке таблицы:

TPicture *Picture; //Описана глобально

//Обработчик события OnCreate формы
Picture = new TPicture ();
Picture->LoadFromFile("c:\\WINDOWS\\Паркет.bmp");
StringGrid1->ColWidths[1]=Picture->Width;
StringGrid1->RowHeights[1]=Picture->Height;

//Обработчик события OnDrawCell таблицы
if (ACol==1 && ARow==1)
 StringGrid1->Canvas->StretchDraw (Rect, Picture->Graphic);

11. Как получить пиксельные координаты ячейки таблицы?

TRect Rect = StringGrid1->CellRect(StringGrid1->Col,StringGrid1->Row);
ShowMessage ((String)Rect.Left+" "+(String)Rect.Top);
Если нужно считать от левого верхнего угла формы, а на StringGrid'а, добавьте к полученным координатам значения StringGrid1->Left и StringGrid1->Top